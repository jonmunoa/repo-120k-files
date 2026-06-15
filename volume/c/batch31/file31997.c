// fichero 31997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31997;

Registro31997 crear_registro31997(int id) {
    Registro31997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
