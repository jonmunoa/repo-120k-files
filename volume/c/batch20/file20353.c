// fichero 20353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20353;

Registro20353 crear_registro20353(int id) {
    Registro20353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
