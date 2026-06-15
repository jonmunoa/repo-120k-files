// fichero 23181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23181;

Registro23181 crear_registro23181(int id) {
    Registro23181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
