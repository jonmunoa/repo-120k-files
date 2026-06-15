// fichero 40565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40565;

Registro40565 crear_registro40565(int id) {
    Registro40565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
