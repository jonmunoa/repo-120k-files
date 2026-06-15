// fichero 10013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10013;

Registro10013 crear_registro10013(int id) {
    Registro10013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
