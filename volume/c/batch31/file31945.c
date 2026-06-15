// fichero 31945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31945;

Registro31945 crear_registro31945(int id) {
    Registro31945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
