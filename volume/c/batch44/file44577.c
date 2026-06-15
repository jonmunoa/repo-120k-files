// fichero 44577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44577;

Registro44577 crear_registro44577(int id) {
    Registro44577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
