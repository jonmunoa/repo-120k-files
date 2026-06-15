// fichero 6149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6149;

Registro6149 crear_registro6149(int id) {
    Registro6149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
