// fichero 19953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19953;

Registro19953 crear_registro19953(int id) {
    Registro19953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
