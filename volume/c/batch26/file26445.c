// fichero 26445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26445;

Registro26445 crear_registro26445(int id) {
    Registro26445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
