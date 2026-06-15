// fichero 20773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20773;

Registro20773 crear_registro20773(int id) {
    Registro20773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
