// fichero 20169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20169;

Registro20169 crear_registro20169(int id) {
    Registro20169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
