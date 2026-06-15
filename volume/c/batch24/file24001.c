// fichero 24001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24001;

Registro24001 crear_registro24001(int id) {
    Registro24001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
