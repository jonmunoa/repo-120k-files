// fichero 16849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16849;

Registro16849 crear_registro16849(int id) {
    Registro16849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
