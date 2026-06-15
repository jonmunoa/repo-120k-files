// fichero 27229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27229;

Registro27229 crear_registro27229(int id) {
    Registro27229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
