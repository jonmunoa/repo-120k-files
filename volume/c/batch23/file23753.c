// fichero 23753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23753;

Registro23753 crear_registro23753(int id) {
    Registro23753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
