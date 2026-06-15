// fichero 44793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44793;

Registro44793 crear_registro44793(int id) {
    Registro44793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
