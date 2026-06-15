// fichero 23281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23281;

Registro23281 crear_registro23281(int id) {
    Registro23281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
