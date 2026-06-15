// fichero 20905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20905;

Registro20905 crear_registro20905(int id) {
    Registro20905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
