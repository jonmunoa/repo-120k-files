// fichero 16953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16953;

Registro16953 crear_registro16953(int id) {
    Registro16953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
