// fichero 34173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34173;

Registro34173 crear_registro34173(int id) {
    Registro34173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
