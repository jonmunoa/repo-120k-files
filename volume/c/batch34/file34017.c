// fichero 34017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34017;

Registro34017 crear_registro34017(int id) {
    Registro34017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
