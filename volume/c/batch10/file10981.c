// fichero 10981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10981;

Registro10981 crear_registro10981(int id) {
    Registro10981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
