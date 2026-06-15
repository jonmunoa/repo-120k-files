// fichero 44897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44897;

Registro44897 crear_registro44897(int id) {
    Registro44897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
