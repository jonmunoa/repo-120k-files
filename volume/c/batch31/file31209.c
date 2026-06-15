// fichero 31209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31209;

Registro31209 crear_registro31209(int id) {
    Registro31209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
