// fichero 8821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8821;

Registro8821 crear_registro8821(int id) {
    Registro8821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
