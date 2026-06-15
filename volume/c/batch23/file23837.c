// fichero 23837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23837;

Registro23837 crear_registro23837(int id) {
    Registro23837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
