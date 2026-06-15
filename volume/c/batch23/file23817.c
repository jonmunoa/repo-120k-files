// fichero 23817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23817;

Registro23817 crear_registro23817(int id) {
    Registro23817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
