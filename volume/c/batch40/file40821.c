// fichero 40821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40821;

Registro40821 crear_registro40821(int id) {
    Registro40821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
