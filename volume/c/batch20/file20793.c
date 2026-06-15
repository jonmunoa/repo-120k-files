// fichero 20793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20793;

Registro20793 crear_registro20793(int id) {
    Registro20793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
