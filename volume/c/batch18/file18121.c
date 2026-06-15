// fichero 18121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18121;

Registro18121 crear_registro18121(int id) {
    Registro18121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
