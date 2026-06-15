// fichero 31841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31841;

Registro31841 crear_registro31841(int id) {
    Registro31841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
