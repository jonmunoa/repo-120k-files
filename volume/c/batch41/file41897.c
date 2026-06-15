// fichero 41897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41897;

Registro41897 crear_registro41897(int id) {
    Registro41897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
