// fichero 31237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31237;

Registro31237 crear_registro31237(int id) {
    Registro31237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
