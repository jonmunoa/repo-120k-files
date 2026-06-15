// fichero 23797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23797;

Registro23797 crear_registro23797(int id) {
    Registro23797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
