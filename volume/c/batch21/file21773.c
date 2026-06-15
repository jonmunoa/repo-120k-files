// fichero 21773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21773;

Registro21773 crear_registro21773(int id) {
    Registro21773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
