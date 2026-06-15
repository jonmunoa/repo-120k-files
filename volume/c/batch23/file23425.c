// fichero 23425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23425;

Registro23425 crear_registro23425(int id) {
    Registro23425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
