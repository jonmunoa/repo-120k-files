// fichero 5929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5929;

Registro5929 crear_registro5929(int id) {
    Registro5929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
