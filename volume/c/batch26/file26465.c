// fichero 26465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26465;

Registro26465 crear_registro26465(int id) {
    Registro26465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
