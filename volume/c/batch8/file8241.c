// fichero 8241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8241;

Registro8241 crear_registro8241(int id) {
    Registro8241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
