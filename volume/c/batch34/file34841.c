// fichero 34841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34841;

Registro34841 crear_registro34841(int id) {
    Registro34841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
