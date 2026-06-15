// fichero 34329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34329;

Registro34329 crear_registro34329(int id) {
    Registro34329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
