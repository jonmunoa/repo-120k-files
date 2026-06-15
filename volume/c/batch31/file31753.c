// fichero 31753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31753;

Registro31753 crear_registro31753(int id) {
    Registro31753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
