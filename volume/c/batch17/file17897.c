// fichero 17897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17897;

Registro17897 crear_registro17897(int id) {
    Registro17897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
