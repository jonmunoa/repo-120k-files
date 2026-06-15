// fichero 40677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40677;

Registro40677 crear_registro40677(int id) {
    Registro40677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
