// fichero 23993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23993;

Registro23993 crear_registro23993(int id) {
    Registro23993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
