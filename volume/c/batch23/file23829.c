// fichero 23829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23829;

Registro23829 crear_registro23829(int id) {
    Registro23829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
