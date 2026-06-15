// fichero 47569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47569;

Registro47569 crear_registro47569(int id) {
    Registro47569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
