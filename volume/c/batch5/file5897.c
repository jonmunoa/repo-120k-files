// fichero 5897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5897;

Registro5897 crear_registro5897(int id) {
    Registro5897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
