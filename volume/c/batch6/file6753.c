// fichero 6753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6753;

Registro6753 crear_registro6753(int id) {
    Registro6753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
