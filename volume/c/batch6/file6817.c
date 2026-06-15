// fichero 6817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6817;

Registro6817 crear_registro6817(int id) {
    Registro6817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
