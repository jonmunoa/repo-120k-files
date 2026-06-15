// fichero 12793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12793;

Registro12793 crear_registro12793(int id) {
    Registro12793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
