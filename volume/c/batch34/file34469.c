// fichero 34469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34469;

Registro34469 crear_registro34469(int id) {
    Registro34469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
