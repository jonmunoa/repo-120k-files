// fichero 26861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26861;

Registro26861 crear_registro26861(int id) {
    Registro26861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
