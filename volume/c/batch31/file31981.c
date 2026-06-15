// fichero 31981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31981;

Registro31981 crear_registro31981(int id) {
    Registro31981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
