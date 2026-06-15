// fichero 28001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28001;

Registro28001 crear_registro28001(int id) {
    Registro28001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
