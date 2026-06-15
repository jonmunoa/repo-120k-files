// fichero 31057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31057;

Registro31057 crear_registro31057(int id) {
    Registro31057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
